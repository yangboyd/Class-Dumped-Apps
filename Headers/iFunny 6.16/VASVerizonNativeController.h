//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VASAds, VASVerizonNativeAd;
@protocol OS_dispatch_queue, VASVerizonNativeComponentDelegate;

@interface VASVerizonNativeController : NSObject
{
    _Bool _iOS10OrGreater;
    VASVerizonNativeAd *_verizonNativeAd;
    VASAds *_vasAds;
    NSObject<OS_dispatch_queue> *_queue;
    id <VASVerizonNativeComponentDelegate> _delegate;
}

+ (id)dictionaryFromContent:(id)arg1 withError:(id *)arg2;
+ (_Bool)accepts:(id)arg1;
+ (id)logger;
- (void).cxx_destruct;
@property(nonatomic) __weak id <VASVerizonNativeComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool iOS10OrGreater; // @synthesize iOS10OrGreater=_iOS10OrGreater;
@property(retain, nonatomic) VASAds *vasAds; // @synthesize vasAds=_vasAds;
@property(retain) VASVerizonNativeAd *verizonNativeAd; // @synthesize verizonNativeAd=_verizonNativeAd;
- (id)prepareWithAdContent:(id)arg1 usingAdSession:(id)arg2;
- (id)initWithDelegate:(id)arg1 VASAds:(id)arg2;

@end

