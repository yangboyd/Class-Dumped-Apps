//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, SKView, UIButton, UIImageView, UILabel, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView, _TtC9SpeedTest15CloseButtonItem;

@interface _TtC9SpeedTest23BreakfastViewController : UIViewController
{
    // Error parsing type: , name: fireBgView
    // Error parsing type: , name: eyeBgView
    // Error parsing type: , name: fireView
    // Error parsing type: , name: headView
    // Error parsing type: , name: eyeFgView
    // Error parsing type: , name: eyeGlowView
    // Error parsing type: , name: spriteView
    // Error parsing type: , name: eyeGlowIntense
    // Error parsing type: , name: smokeParent
    // Error parsing type: , name: smokeViews
    // Error parsing type: , name: catParts
    // Error parsing type: , name: catParent
    // Error parsing type: , name: label
    // Error parsing type: , name: labelOffset
    // Error parsing type: , name: duesButton
    // Error parsing type: , name: flashView
    // Error parsing type: , name: closeButtonItem
    // Error parsing type: , name: tributeLabel
    // Error parsing type: , name: swipeGesture
    // Error parsing type: , name: tapGesture
    // Error parsing type: , name: noiseView
    // Error parsing type: , name: ffwdImage
    // Error parsing type: , name: poemKey
    // Error parsing type: , name: scene
    // Error parsing type: , name: smokeScene
    // Error parsing type: , name: lineSpaceMultiplier
    // Error parsing type: , name: maskShapeLayer
    // Error parsing type: , name: volume
    // Error parsing type: , name: poemOffset
    // Error parsing type: , name: poem
    // Error parsing type: , name: fontSize
    // Error parsing type: , name: isFastForward
    // Error parsing type: , name: didFastForward
    // Error parsing type: , name: headImage
    // Error parsing type: , name: eyeImage
    // Error parsing type: , name: eyeGlowImage
    // Error parsing type: , name: soundtrack
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)duePayFastForward:(id)arg1;
- (void)stopFastForward:(id)arg1;
- (void)labelTapped:(id)arg1;
- (void)labelSwiped:(id)arg1;
- (void)dismissTheme:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) UIImageView *ffwdImage; // @synthesize ffwdImage;
@property(nonatomic, retain) SKView *noiseView; // @synthesize noiseView;
@property(nonatomic, retain) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture;
@property(nonatomic, retain) UISwipeGestureRecognizer *swipeGesture; // @synthesize swipeGesture;
@property(nonatomic, retain) UILabel *tributeLabel; // @synthesize tributeLabel;
@property(nonatomic, retain) _TtC9SpeedTest15CloseButtonItem *closeButtonItem; // @synthesize closeButtonItem;
@property(nonatomic, retain) UIView *flashView; // @synthesize flashView;
@property(nonatomic, retain) UIButton *duesButton; // @synthesize duesButton;
@property(nonatomic, retain) NSLayoutConstraint *labelOffset; // @synthesize labelOffset;
@property(nonatomic, retain) UILabel *label; // @synthesize label;
@property(nonatomic, retain) UIView *catParent; // @synthesize catParent;
@property(nonatomic, copy) NSArray *catParts; // @synthesize catParts;
@property(nonatomic, copy) NSArray *smokeViews; // @synthesize smokeViews;
@property(nonatomic, retain) UIView *smokeParent; // @synthesize smokeParent;
@property(nonatomic, retain) UIImageView *eyeGlowIntense; // @synthesize eyeGlowIntense;
@property(nonatomic, retain) SKView *spriteView; // @synthesize spriteView;
@property(nonatomic, retain) UIImageView *eyeGlowView; // @synthesize eyeGlowView;
@property(nonatomic, retain) UIImageView *eyeFgView; // @synthesize eyeFgView;
@property(nonatomic, retain) UIImageView *headView; // @synthesize headView;
@property(nonatomic, retain) SKView *fireView; // @synthesize fireView;
@property(nonatomic, retain) UIImageView *eyeBgView; // @synthesize eyeBgView;
@property(nonatomic, retain) UIView *fireBgView; // @synthesize fireBgView;

@end

