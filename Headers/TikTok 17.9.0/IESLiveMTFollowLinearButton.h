//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESLiveMTFollowButton.h"

#import "LOTColorValueDelegate-Protocol.h"

@class NSString, UILabel, UIView;

@interface IESLiveMTFollowLinearButton : IESLiveMTFollowButton <LOTColorValueDelegate>
{
    UIView *_borderView;
    UILabel *_followLabel;
}

+ (id)buttonWithViewModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *followLabel; // @synthesize followLabel=_followLabel;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
- (struct CGColor *)colorForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startColor:(struct CGColor *)arg5 endColor:(struct CGColor *)arg6 currentColor:(struct CGColor *)arg7;
- (struct CGSize)contentSize;
- (_Bool)needDiplayBackgroundSalver;
- (void)setupLayout;
- (void)setupUI;
- (id)initWithViewModel:(id)arg1 loadingImageName:(id)arg2 lotFileName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

