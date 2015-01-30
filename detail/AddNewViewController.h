//
//  AddNewViewController.h
//  detail
//
//  Created by Dmitry on 1/30/15.
//  Copyright (c) 2015 Dmitry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddNewViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *textfieldName;
- (IBAction)btnSave:(id)sender;
@property (weak, nonatomic) IBOutlet UITextView *texthere;

@end
