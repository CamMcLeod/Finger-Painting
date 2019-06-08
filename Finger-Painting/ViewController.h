//
//  ViewController.h
//  Finger-Painting
//
//  Created by Cameron Mcleod on 2019-06-07.
//  Copyright © 2019 Cameron Mcleod. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    CGFloat velocity;
    BOOL mouseSwiped;
}

@property (weak, nonatomic) IBOutlet UIImageView *mainImage;
@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImage;


- (IBAction)pencilPressed:(id)sender;
- (IBAction)eraserPressed:(id)sender;

@end

