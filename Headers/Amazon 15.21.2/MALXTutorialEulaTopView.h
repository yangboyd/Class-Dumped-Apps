//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UITextView;
@protocol MALXTutorialSheetBottomViewDelegate;

@interface MALXTutorialEulaTopView : UIView
{
    UILabel *_eulaSheetTitle;
    UITextView *_legalTextView;
    id <MALXTutorialSheetBottomViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MALXTutorialSheetBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UITextView *legalTextView; // @synthesize legalTextView=_legalTextView;
@property(nonatomic) __weak UILabel *eulaSheetTitle; // @synthesize eulaSheetTitle=_eulaSheetTitle;
- (void).cxx_destruct;

@end

