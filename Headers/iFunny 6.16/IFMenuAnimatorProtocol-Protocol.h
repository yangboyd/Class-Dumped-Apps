//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class UIColor, UIView;

@protocol IFMenuAnimatorProtocol <NSObject>
@property(readonly, nonatomic) struct CGRect closeMenuFrame;
@property(readonly, nonatomic) UIView *closeMenuSnapshot;
@property(readonly, nonatomic) struct CGRect addMemeLabelFrame;
@property(readonly, nonatomic) UIView *addMemeLabelSnapshot;
@property(readonly, nonatomic) struct CGRect addMemePicFrame;
@property(readonly, nonatomic) UIView *addMemePicSnapshot;
@property(readonly, nonatomic) long long numberOfMenuItems;
@property(retain, nonatomic) UIView *backgroundSnapshot;
@property(readonly, nonatomic) UIColor *backgroundShadingColor;
- (struct CGRect)menuItemFrameByIndex:(long long)arg1;
- (UIView *)menuItemByIndex:(long long)arg1;
@end

