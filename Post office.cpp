
#include <iostream>
using namespace std;

int main()
{
	int totalCost, num1 = 20000 , num2 = 50000 , num3 = 500000 ,
	    insuranceFee = 10000;
	int Wfee1 = 0 , Wfee2 = 10000 , Wfee3 = 30000;    
	char user;
	double weight, n1 = 2.00, n2 = 5.00;
	    
	cout << "Do you want to send your package?(y/n) ";
	
	cin >> user;
	
	while(user == 'y' )
	{
	  
	    cout << "shipping fee goes like this:\n"
	         << "1.Intra-city --> 20,000 toman\n"
	         << "2.Inter-city --> 50,000 toman\n"
	         << "3.Interational --> 500,000 toman\n"
	         << "choose an option: ";
	    int option;
	    cin >> option;
	    
	       
	    cout << "Enter your delivery weight:(0.00 Kg) ";
	    cin >> weight;
	    
	    if(weight < n1 )
	    {
		    cout << Wfee1 << " ADDITIONAL FEE.\n";
		    if(option == 1)
		    {
		  	  cout << "Do you have premium subscription?(y/n) ";
	          cin >> user;
	        
		  	    if(user == 'y')
	  	        {			  
		  	        totalCost = Wfee1;
		  	        cout << "Total COST IS " << totalCost << endl;
		  	    }
		  	    else 
		        {	
					totalCost = num1;	
		            cout  << "TOTAL COST IS " << totalCost << endl;
		        } 
		    }
	        else if(option == 2)
	        {			  
		    	    totalCost = num2;
	      	        cout << "TOTAL COST IS " << totalCost << endl;
		    }
		    else if(option == 3)
		    {
		  	    cout << "Do you want to add shipping insurance?(y/n) ";
	            cin >> user;
	        
		  	        if(user == 'y')
		  	        {
					  
			            totalCost = num3 + insuranceFee;
		                cout << "TOTAL COST IS " << totalCost << endl;
		            }
		            else 
		            {
					
		                totalCost = num3;	 	            
		                cout << "TOTAL COST IS " << totalCost << endl;
		            }
		    }
		    
	    } 
	      
		else if(weight >= n1 && weight <= n2 )
		{		  
		    cout << Wfee2 << " ADDITIONAL FEE.\n";
			if(option == 1)
		    {		    			    
		  	    cout << "Do you have premium subscription?(y/n) ";
	            cin >> user;
	        
		  	    if(user == 'y')
	  	        {			  
		  	        totalCost = Wfee1;
		  	        cout << "TOTAL COST IS " << totalCost << endl;
		  	    }
		  	    else 
		        {			
				        totalCost = num1 + Wfee2;		  	            
		                cout << "TOTAL COST IS " << totalCost << endl;
		        }  		    
		    }
		    else if(option == 2)
		    {
		    	 totalCost = num2 + Wfee2;
		    	
		         cout << "TOTAL COST IS " << totalCost << endl;
			}
			else if(option == 3)
			{
				cout << "Do you want to add shipping insurance?(y/n) ";
	            cin >> user;
	        
		  	        if(user == 'y')
		  	        {    
		  	                totalCost = num3 + Wfee2 + insuranceFee;
		  	                cout << insuranceFee << " toman is shipping insurance fee.\n"			           
		                         << Wfee2 << " ADDITIONAL FEE.\nTOTAL COST IS " << totalCost << endl;
		            }
		            else				
				    {					
				        totalCost = num3 + Wfee2;		     	        		     	    
				        
		                cout << "TOTAL COST IS " << totalCost << endl;
		            }
			}
		       
	    } 
	           
		else if(weight > n2)
	    {
	        cout << Wfee3 << " ADDITIONAL FEE.\n";
	        	
			if(option == 1)
	        {
	       	    cout << "Do you have premium subscription?(y/n) ";
	            cin >> user;
	        
		  	    if(user == 'y')
	  	        {			  
		  	        totalCost = Wfee1;
		  	        cout << "TOTAL COST IS " << totalCost << endl;
		  	    }
		  	    else
		        {			
				    totalCost = num1 + Wfee3;		  	      
		            cout << "TOTAL COST IS " << totalCost << endl;
		        }
		    }
	      		
		   
	        else if(option == 2)
	        {
	      	        totalCost = num2 + Wfee3;
				    
		            cout  << "TOTAL COST IS " << totalCost << endl;	
		    }
	        else if(option == 3)
		    {
		   	    cout << "Do you want to add shipping insurance?(y/n) ";
	            cin >> user;
	        
		  	        if(user == 'y')
		  	        {
							       
			            totalCost = num3 + insuranceFee + Wfee3;
		                cout << insuranceFee << "toman is shipping insurance fee.\n"
		                     << "TOTAL COST IS " << totalCost << endl;
					}
		   	        else 
		   	        {					   
		    	        totalCost = num3 + Wfee3;
		    	        cout << "TOTAL COST IS " << totalCost << endl;
		    	    }  
		    } 
	    }  
	    cout << "Do you want to send another package?(y/n) ";	    
     	cin >> user;
	        if(user == 'y')
	            continue;
	        else
		        break;		  	
    }
	           
        return 0;			
	    	    
}