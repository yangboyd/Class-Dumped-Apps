//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class MPNativeAdRendererConfiguration, UIView;
@protocol MPNativeAdAdapter, MPNativeAdRendererSettings;

@protocol MPNativeAdRenderer <NSObject>
+ (MPNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:(id <MPNativeAdRendererSettings>)arg1;
- (UIView *)retrieveViewWithAdapter:(id <MPNativeAdAdapter>)arg1 error:(id *)arg2;
- (id)initWithRendererSettings:(id <MPNativeAdRendererSettings>)arg1;

@optional
@property(readonly, nonatomic) CDUnknownBlockType viewSizeHandler;
- (void)nativeAdTapped;
- (void)adViewWillMoveToSuperview:(UIView *)arg1;
@end

