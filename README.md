# CocoaBindingExample
Mac OSX 10.11.1 bindg example on Xcode 7.1

#Illustrates how the Cocoa Binding works.
No code is required for this app.

##Observed user behavior
User changes a slider and the value changes. As the 'NSSlider' and 'NSTextField' are set to contious mode the  value is stored in the variable 'bindedIntValue' immediately  The Slider and text field are enabled by  a checkbox.


###Binding 1: 
Bind the slider and text-field to one value. The value of slider/textedit is put in this int
* Bind: Horizontal Slider: NSSlider --> Bindng --> Value --> Bind To --> [check the box] "View Controller"
                      Set 'Model Key path' to 'bindedIntValue'

* Bind: 
        Text Field --> NSTextField --> Bindng --> Value --> Bind To --> [check the box] "View Controller"


###Binding 2: 
Bind 'enabled' to value that is saved in Pref.

* The NSButton (checkbox button) is binded to "Shared user defaults controls .."
    NSButton --> Bindng --> Value --> Bind To --> "Shared user defaults controls .."
    set 'Controller Key' to 'values' and 'Model Key path' to 'controlsEnabled'

###Binding 3: 
* Bind availability (i.e.) Enabled of Slider and Text-field and bind to the checkbox.
    Horizontal Slider: NSSlider --> Bindng --> Availability --> Bind To --> "Shared user defaults controls .."
    Text Field --> NSTextField --> Bindng --> Availability --> Bind To --> "Shared user defaults controls .."
 in both Set "Controller Key" to "value" and 'Model key path' to 'controlsEnabled'
