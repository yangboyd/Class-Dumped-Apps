//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseView.h"

@class UILabel;

@interface SetupChecklistInfoView : BaseView
{
    UILabel *_beforeStartingLabel;
    UILabel *_wifiPasswordLabel;
    UILabel *_homeBaseLabel;
    UILabel *_robotLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *robotLabel; // @synthesize robotLabel=_robotLabel;
@property(nonatomic) __weak UILabel *homeBaseLabel; // @synthesize homeBaseLabel=_homeBaseLabel;
@property(nonatomic) __weak UILabel *wifiPasswordLabel; // @synthesize wifiPasswordLabel=_wifiPasswordLabel;
@property(nonatomic) __weak UILabel *beforeStartingLabel; // @synthesize beforeStartingLabel=_beforeStartingLabel;
- (void)initUIValues;
- (void)initUIStyles;
- (void)commonInit;
- (id)init;

@end

