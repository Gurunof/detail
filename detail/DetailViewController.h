//
//  DetailViewController.h
//  detail
//
//  Created by Dmitry on 1/30/15.
//  Copyright (c) 2015 Dmitry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

