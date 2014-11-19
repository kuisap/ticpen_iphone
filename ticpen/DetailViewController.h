//
//  DetailViewController.h
//  ticpen
//
//  Created by T.KADOWAKI on 2014/11/19.
//  Copyright (c) 2014年 KUISAP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

