//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AspenUIComponents/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, UIColor, UILabel, UIView;
@protocol BasePopoverDelegate;

@interface LabelPopoverViewController : UIViewController <UIPopoverPresentationControllerDelegate>
{
    id <BasePopoverDelegate> _delegate;
    NSString *_labelText;
    UIColor *_popoverBackgroundColor;
    UILabel *_label;
    UIView *_popoverContentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *popoverContentView; // @synthesize popoverContentView=_popoverContentView;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIColor *popoverBackgroundColor; // @synthesize popoverBackgroundColor=_popoverBackgroundColor;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(nonatomic) __weak id <BasePopoverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)handlePopoverTap:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)popoverPresentTransition;
- (void)configureAsPopover;
- (id)initWithText:(id)arg1 backgroundPopoverColor:(id)arg2 parentView:(id)arg3 sourceRect:(struct CGRect)arg4 permittedArrowDirections:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

