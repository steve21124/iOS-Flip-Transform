//
//  UIView+GenericAnimation.h
//  EasySample
//
//  Created by Steve on 6/24/13.
//
//

#import <UIKit/UIKit.h>
#import "AnimationDelegate.h"
#import "AnimationFrame.h"
#import <QuartzCore/QuartzCore.h>

@interface UIView (GenericAnimation)

// Stack of Animation Frames
// Image data is grouped into Animation Frames, each frame contains the set of images displayed in between sequences
@property (nonatomic, retain) NSMutableArray *imageStackArray;

// set inset to restrict text frame size
@property (nonatomic) CGPoint textInset;
// set offset from position to align text
@property (nonatomic) CGPoint textOffset;
// font size (different from UILabel font size property)
@property (nonatomic) float fontSize;
// provide a font from plist or use inbuilt fonts
// if the rendering is very slow, change the font
@property (nonatomic, assign) NSString *font;
// font alignment
@property (nonatomic, assign) NSString *fontAlignment;
// truncation mode to set for CATextLayer
@property (nonatomic, assign) NSString *textTruncationMode;

// view has to know the type of animation to be able to prepare (draw, slice) the animation layers
@property (nonatomic) AnimationType animationType;
@end
