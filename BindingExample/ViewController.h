//
//  ViewController.h
//  BindingExample
//
//  Created by Ajay Thakur on 10/28/15.
//  Copyright © 2015 Ajay Thaur. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController

// Observed user behavior
//    User changes a slider and the value changes. As the 'NSSlider' and 'NSTextField' are set to contious
//     mode the  value is stored in the variable 'bindedIntValue' immediately
//
//    The Slider and text field are enabled by  a checkbox.
//
// Binding 1:
//   The followings will bind the Int value to the slider. So the value of slider is put in this int
//        Horizontal Slider: NSSlider --> Bindng --> Value --> Bind To --> [check the box] "View Controller"
//                      Set 'Model Key path' to 'bindedIntValue'
//
//   The following will bind 
//        Text Field --> NSTextField --> Bindng --> Value --> Bind To --> [check the box] "View Controller"
//
//
//  Binding 2: bind 'enabled' to value that is saved in Pref.
//
//   The NSButton (checkbox button) is binded to "Shared user defaults controls .."
//        NSButton --> Bindng --> Value --> Bind To --> "Shared user defaults controls .."
//        set 'Controller Key' to 'values' and 'Model Key path' to 'controlsEnabled'
//
//   Binding 3: Bind availability (i.e.) Enabled and bind to the checkbox.
//   Horizontal Slider: NSSlider --> Bindng --> Availability --> Bind To --> "Shared user defaults controls .."
//   Text Field --> NSTextField --> Bindng --> Availability --> Bind To --> "Shared user defaults controls .."
//      in both
//          Set "Controller Key" to "value" and 'Model key path' to 'controlsEnabled'
//          
//
// No code required.

@property (assign) NSInteger bindedIntValue; // Thus integer is binded to the UX

@end

