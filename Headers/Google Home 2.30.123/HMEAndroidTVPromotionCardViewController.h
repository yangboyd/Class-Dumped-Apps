//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HMERichTextViewDelegate-Protocol.h"

@class HMEAndroidTVMediaServiceCardCell, NSString, UIView;

@interface HMEAndroidTVPromotionCardViewController : UIViewController <HMERichTextViewDelegate>
{
    HMEAndroidTVMediaServiceCardCell *_cell;
    UIView *_cardView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(readonly, nonatomic) HMEAndroidTVMediaServiceCardCell *cell; // @synthesize cell=_cell;
- (void)textView:(id)arg1 didSelectURL:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

