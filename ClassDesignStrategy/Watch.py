"""
    @Author:Kunal Narkhede
    @Date:21/12/2023
    @Goal:To implement class Watch
    Capture Real Life Product on Amazon
    https://www.amazon.in/Seiko-Analog-Blue-Dial-Watch-SSK003K1/dp/B0B3GJYFQX/ref=sr_1_3?pf_rd_i=2563504031&pf_rd_m=A1VBAL9TL5WCBF&pf_rd_p=7f19059d-3702-426d-9150-4e9084e071fb&pf_rd_r=NRK1TVNWH3MJFMEPEYRP&pf_rd_s=merchandised-search-12&qid=1702952424&refinements=p_89%3ASeiko&s=watches&sr=1-3&th=1
"""

import sys
class ProductDimension:
    """
        this class implement the Dimension of watch
        @__init__(self, length: float, width: float, height: float, weight: float):
        Constructor
        @get_length(self) 
            getter of attribute length
        @get_width(self)
            getter of attribute width
        @get_height(self)
            getter of attribute height
        @get_weight(self)
            getter of attribute weight
        ------------------------------------- 
        @set_length(self):
            setter of attribute length
        @set_width(self):
            setter of attribute width
        @set_height(self):
            setter of attribute height
        @set_weight(self):
            setter of attribute weight  
    """
    
    def __init__(
             self,
             length:float,
             width:float,
             height:float,
             weight:float
        ):
        
        """
            Constructor of ProductDimension class:
            @__init__(self, length: float, width: float, height: float, weight: float):
            
            @self:newly created class object of ProductDimension
            @length:Client specified value for attribute length
            @width:Client specified value for attribute width
            @height:Client specified value for attribute height
            @weight:Client specified value for attribute weight
        
        """
        if type(length)!=float:
            raise TypeError("Bad type:length")
        if type(width)!=float:
            raise TypeError("Bad type:width")
        if type(height)!=float:
            raise TypeError("Bad type:height")
        if type(weight)!=float:
            raise TypeError("Bad type:weight")
        if length<=0.0:
            raise ValueError("Length must be positive")
        if width<=0.0:
            raise ValueError("Width must be positive")
        if height<=0.0:
            raise ValueError("Height must be positive")
        if weight<=0.0:
            raise ValueError("Weight must be positive")
        
        self.length=length
        self.width=width
        self.height=height
        self.weight=weight
        
     #getter method   
        
    def get_length(self) -> float:
        """ 
            Returns the length attribute of the calling object 
        """
        return self.length
    
    def get_width(self) -> float:
        """ 
            Returns the width attribute of the calling object 
        """
        return self.width
    
    def get_height(self) -> float:
        """ 
            Returns the height attribute of the calling object 
        """
        return self.height
    
    def get_weight(self) -> float:
        """ 
            Returns the weight attribute of the calling object 
        """
        return self.weight
   
    #setter method
    
    def set_length(self,new_length:float):
        """
            Sets the length attribute of the calling object to @new_length
            Before setting, TypeCheck and ValueCheck is performed.
        """
        if type(new_length)!=float:
            raise TypeError("new_length must be an float")
        if new_length <= 0.0:
            raise TypeError("new_length must be positive")
        self.length=new_length
        
    def set_width(self,new_width:float):
        """
            Sets the width attribute of the calling object to @new_width
            Before setting, TypeCheck and ValueCheck is performed.
        """
        if type(new_width)!=float:
            raise TypeError("new_width must be an float")
        if new_width <= 0.0:
            raise ValueError("new_width must be positive")
        self.width=new_width
        
    def set_height(self,new_height:float):
        """
            Sets the height attribute of the calling object to @new_height
            Before setting, TypeCheck and ValueCheck is performed.
        """
        if type(new_height)!=float:
            raise TypeError("new_height must be an float")
        if new_height <= 0.0 :
            raise ValueError("new_height must be positive")
        self.height=new_height 
        
    def set_weight(self,new_weight:float):
        """
            Sets the weight attribute of the calling object to @new_weight
            Before setting, TypeCheck and ValueCheck is performed.
        """
        if type(new_weight)!=float:
            raise TypeError("new_weight must be an float")
        if new_weight <= 0.0:
            raise ValueError("new_weight must be positive")
        self.weight=new_weight
        
class Watch:
    """
        This class is implement the characterstics of Watch
        __init__(self,
                    wtch_brand:str,
                    wtch_manufacturer:str,
                    wtch_model:str,
                    wtch_prod_dimensions:ProductDimension,
                    wtch_nr_batteries:int,
                    wtch_nr_model:str,
                    wtch_features:[str],
                    wtch_dsp_type:str,
                    wtch_are_batteries_included:bool,
                    wtch_are_batteries_required:bool,
                    wtch_country_of_origin:str     
        Constructor
        @get_wtch_brand(self)
        getter of attribute wtch_brand
        @get_wtch_manufacturer(self)
        getter of attribute wtch_manufacturer
        @get_wtch_model(self)   
        getter of attribute wtch_model
        @get_wtch_prod_dimensions(self)   
        getter of attribute wtch_prod_dimensions
        @get_wtch_nr_batteries(self)   
        getter of attribute wtch_nr_batteries
        @get_wtch_nr_model(self)   
        getter of attribute wtch_nr_model   
        @get_wtch_features(self)   
        getter of attribute wtch_features
        @get_wtch_dsp_type(self)   
        getter of attribute wtch_dsp_type
        @get_wtch_are_batteries_included(self)   
        getter of attribute wtch_are_batteries_included
        @get_wtch_are_batteries_required(self)   
        getter of attribute wtch_are_batteries_required
        --------------------------------------------------------
        @set_wtch_brand(self)
        setter of attribute wtch_brand
        @set_wtch_manufacturer(self)
        setter of attribute wtch_manufacturer
        @set_wtch_model(self)   
        setter of attribute wtch_model
        @set_wtch_prod_dimensions(self)   
        setter of attribute wtch_prod_dimensions
        @set_wtch_nr_batteries(self)   
        setter of attribute wtch_nr_batteries
        @set_wtch_nr_model(self)   
        setter of attribute wtch_nr_model   
        @set_wtch_features(self)   
        setter of attribute wtch_features
        @set_wtch_dsp_type(self)   
        setter of attribute wtch_dsp_type
        @set_wtch_are_batteries_included(self)   
        setter of attribute wtch_are_batteries_included
        @set_wtch_are_batteries_required(self)   
        setter of attribute wtch_are_batteries_required
                    
    """
    def __init__(self,
                 wtch_brand:str,
                 wtch_manufacturer:str,
                 wtch_model:str,
                 wtch_prod_dimensions:ProductDimension,
                 wtch_nr_batteries:int,
                 wtch_nr_model:str,
                 wtch_features:[str],
                 wtch_dsp_type:str,
                 wtch_are_batteries_included:bool,
                 wtch_are_batteries_required:bool,
                 wtch_country_of_origin:str   
                ):   
                 
        """
            @self:newly created class object of ProductDimension
            @wtch_brand:Client specified value for attribute wtch_brand
            @wtch_manufacturer:Client specified value for attribute wtch_manufacturer
            @wtch_model:Client specified value for attribute wtch_model
            @wtch_prod_dimensions:Client specified value for attribute wtch_prod_dimensions
            @wtch_nr_batteries:Client specified value for attribute wtch_nr_batteries
            @wtch_nr_model:Client specified value for attribute wtch_nr_model
            @wtch_features:Client specified value for attribute wtch_features
            @wtch_dsp_type:Client specified value for attribute wtch_dsp_type
            @wtch_are_batteries_included:Client specified value for attribute wtch_are_batteries_included
            @wtch_are_batteries_required:Client specified value for attribute wtch_are_batteries_required
            @wtch_country_of_origin:Client specified value for attribute wtch_country_of_origin
        """         
        
        if type(wtch_brand)!=str:
            raise TypeError("Bad type:brand")
        if type(wtch_manufacturer)!=str:
            raise TypeError("Bad type:manufacturer")
        if type(wtch_model)!=str:
            raise TypeError("Bad type:model")
        if type(wtch_prod_dimensions)!=ProductDimension:
            raise TypeError("Bad type:Product Dimension")
        if type(wtch_nr_batteries)!=int:
            raise TypeError("Bad type:number of batteries")
        if type(wtch_nr_model)!=str:
            raise TypeError("Bad type:Watch Model")
        if '__iter__' not in dir(type(wtch_features)):
            raise TypeError("Bad type:watch feature must iterable")
        for feature in wtch_features:
            if  type(feature)!=str:
                raise TypeError("Bad type:feature")
        if type(wtch_dsp_type)!=str:
            raise TypeError("Bad type:Display type")
        if type(wtch_are_batteries_included)!=bool:
            raise TypeError("Bad type:are_batteries_included")
        if type(wtch_are_batteries_required)!=bool:
            raise TypeError("Bad type:are_batteries_required")
        if type(wtch_country_of_origin)!=str:
            raise TypeError("Bad type:country of origin")
        self.wtch_brand=wtch_brand
        self.wtch_manufacturer=wtch_manufacturer
        self.wtch_model=wtch_model
        self.wtch_prod_dimensions=wtch_prod_dimensions
        self.wtch_nr_batteries=wtch_nr_batteries
        self.wtch_nr_model=wtch_nr_model
        self.wtch_features=wtch_features
        self.wtch_dsp_type=wtch_dsp_type
        self.wtch_are_batteries_included=wtch_are_batteries_included
        self.wtch_are_batteries_required=wtch_are_batteries_required
        self.wtch_country_of_origin=wtch_country_of_origin
        
    #getter method
        
    def get_wtch_brand(self)->str:
        """ 
            Returns the wtch_brand attribute of the calling object 
        """
        return self.wtch_brand
    
    def get_wtch_manufacturer(self)->str:
        """ 
            Returns the wtch_manufacturer attribute of the calling object 
        """
        return self.wtch_manufacturer
    
    def get_wtch_model(self)->str:
        """ 
            Returns the wtch_model attribute of the calling object 
        """
        return self.wtch_model
    
    def get_wtch_prod_dimensions(self)->ProductDimension:
        """ 
            Returns the wtch_prod_dimensions attribute of the calling object 
        """
        return self.wtch_prod_dimensions
    
    def get_wtch_nr_batteries(self)->int:
        """ 
            Returns the wtch_nr_batteries attribute of the calling object 
        """
        return self.wtch_nr_batteries
    
    def get_wtch_nr_model(self)->str:
        """ 
            Returns the wtch_nr_model attribute of the calling object 
        """
        return self.wtch_nr_model
    
    def get_wtch_features(self)->[str]:
        """ 
            Returns the wtch_features attribute of the calling object 
        """
        return self.wtch_features
    
    def get_wtch_dsp_type(self)->str:
        """ 
            Returns the wtch_dsp_type attribute of the calling object 
        """
        return self.wtch_dsp_type
    
    def get_wtch_are_batteries_included(self)->bool:
        """ 
            Returns the wtch_are_batteries_included attribute of the calling object 
        """
        return self.wtch_are_batteries_included
    
    def get_wtch_are_batteries_required(self)->bool:
        """ 
            Returns the wtch_are_batteries_required attribute of the calling object 
        """
        return self.wtch_are_batteries_required
    
    def get_wtch_country_of_origin(self)->str:
        """ 
            Returns the wtch_country_of_origin attribute of the calling object 
        """
        return self.wtch_country_of_origin
    
    #setter method
    
    def set_wtch_brand(self,new_wtch_brand:str)->None:
        """
            Sets the wtch_brand attribute of the calling object to @new_length
            Before setting, TypeCheck is performed.
        """
        if type(new_wtch_brand)!=str:
            raise TypeError("new_wtch_brand must be str")
        self.wtch_brand=new_wtch_brand
        
    def set_wtch_manufacturer(self,new_wtch_manufacturer:str)->None:
        """
            Sets the wtch_manufacturer attribute of the calling object to @new_wtch_manufacturer
            Before setting, TypeCheck is performed.
        """
        if type(new_wtch_manufacturer)!=str:
            raise TypeError("new_wtch_manifacturer must be str")
        self.wtch_manufacturer=new_wtch_manufacturer
        
    def set_wtch_model(self,new_wtch_model:str)->None:
        """
            Sets the wtch_model attribute of the calling object to @new_wtch_model
            Before setting, TypeCheck is performed.
        """
        if type(new_wtch_model)!=str:
            raise TypeError("new_wtch_model must be str")
        self.wtch_model=new_wtch_model
        
    def set_wtch_prod_dimensions(self,new_wtch_prod_dimensions:ProductDimension)->None:
        """
            Sets the wtch_prod_dimensions attribute of the calling object to @new_wtch_prod_dimensions
            Before setting, TypeCheck is performed.
        """
        if type(new_wtch_prod_dimensions)!=ProductDimension:
            raise TypeError("new_wtch_prod_dimensions must be ProductDimension")
        self.wtch_prod_dimensions=new_wtch_prod_dimensions
        
    def set_wtch_nr_batteries(self,new_wtch_nr_batteries:int)->None:
        """
            Sets the wtch_nr_batteries attribute of the calling object to @new_wtch_nr_batteries
            Before setting, TypeCheck and ValueCheck is performed.
        """
        if type(new_wtch_nr_batteries)!=int:
            raise TypeError("new_wtch_nr_batteries must be int")
        if new_wtch_nr_batteries<=0:
            raise ValueError("number of batteries must be positive")
        self.wtch_nr_batteries=new_wtch_nr_batteries
        
    def set_wtch_nr_model(self,new_wtch_nr_model:str)->None:
        """
            Sets the wtch_nr_model attribute of the calling object to @new_wtch_nr_model
            Before setting, TypeCheck is performed.
        """
        if type(new_wtch_nr_model)!=str:
            raise TypeError("new_wtch_nr_model must be str")
        self.wtch_nr_model=new_wtch_nr_model
        
    def set_wtch_features(self,new_wtch_features:[str])->None:
        """
            Sets the wtch_features attribute of the calling object to @new_wtch_features
            Before setting, TypeCheck is performed.
        """
        if '__iter__' not in dir(type(new_wtch_features)):
            raise TypeError("new_wtch_features must itetable")
        for feature in new_wtch_features:
            if type(feature)!=str:
                raise TypeError("new_wtch_features must be str")
        self.wtch_features=new_wtch_features
        
    def set_wtch_dsp_type(self,new_wtch_dsp_type:str)->None:
        """
            Sets the wtch_dsp_type attribute of the calling object to @new_wtch_dsp_type
            Before setting, TypeCheck is performed.
        """
        if type(new_wtch_dsp_type)!=str:
            raise TypeError("new_wtch_dsp_type must be str")
        self.wtch_dsp_type=new_wtch_dsp_type
        
    def set_wtch_are_batteries_included(self,new_wtch_are_batteries_included:bool)->None:
        """
            Sets the wtch_are_batteries_included attribute of the calling object to @new_wtch_are_batteries_included
            Before setting, TypeCheck is performed.
        """
        if type(new_wtch_are_batteries_included)!=bool:
            raise TypeError("new_wtch_are_batteries_included must be bool")
        self.wtch_are_batteries_included=new_wtch_are_batteries_included
        
    def set_wtch_are_batteries_required(self,new_wtch_are_batteries_required:bool)->None:
        """
            Sets the wtch_are_batteries_required attribute of the calling object to @new_wtch_are_batteries_required
            Before setting, TypeCheck is performed.
        """
        if type(new_wtch_are_batteries_required)!=bool:
            raise TypeError("new_wtch_are_batteries_required must be bool")
        self.wtch_are_batteries_required=new_wtch_are_batteries_required
        
    def set_wtch_country_of_origin(self,new_wtch_country_of_origin:str)->None:
        """
            Sets the wtch_country_of_origin attribute of the calling object to @new_wtch_country_of_origin
            Before setting, TypeCheck is performed.
        """
        if type(new_wtch_country_of_origin)!=str:
            raise TypeError("new_wtch_country_of_origin must be str")
        self.wtch_country_of_origin=new_wtch_country_of_origin
        
    def show(self)->None:
        
        """
            This function display all the characterstics of Watch class
        """
        
        print("Watch Brand:{}".format(self.wtch_brand))
        print("Watch Manufaturer:{}".format(self.wtch_manufacturer))
        print("Watch Model:{}".format(self.wtch_model))
        print("Watch Product Dimension:{}".format(self.wtch_prod_dimensions.__dict__))
        print("Watch Number of batteries:{}".format(self.wtch_nr_batteries))
        print("Watch Model number:{}".format(self.wtch_nr_model))
        print("Watch Spacial features:{}".format(self.wtch_features))
        print("Watch Display type:{}".format(self.wtch_dsp_type))
        print("Watch Batteries included:{}".format(self.wtch_are_batteries_included))
        print("Watch Batteries required:{}".format(self.wtch_are_batteries_required))
        print("Watch Country of origin:{}".format(self.wtch_country_of_origin))
           
            
def main():
    
    Wtch_obj=Watch(
                   "Seiko",
                   "Seiko",
                   "SSK003K1",
                   ProductDimension(30.5,30.5,30.5,250.0),
                   1,
                   "SSK003K1",
                   ["Calculator","Dual Time","Glow in the dark","Water Resistant"],
                   "Analog",
                   False,
                   False,
                   "China"
             )
    print("WATCH PRODUCT DETAILS:")
    Wtch_obj.show()
    #we can also get the attribute using getter method and 
    #set the specific attribute using setter method 
    sys.exit(0)  
main()      