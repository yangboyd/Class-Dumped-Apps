//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpeedTestEngine/AdRequestBuilder-Protocol.h>
#import <SpeedTestEngine/DTBAdCallback-Protocol.h>

@class DTBAdLoader, NSString;

@interface AmazonDTBAdRequestBuilder : NSObject <DTBAdCallback, AdRequestBuilder>
{
    NSString *_adUnitID;
    DTBAdLoader *_adLoader;
    CDUnknownBlockType _callback;
}

+ (void)configureWithDebug:(_Bool)arg1;
- (void).cxx_destruct;
- (void)onSuccess:(id)arg1;
- (void)onFailure:(int)arg1;
- (void)loadRequestForView:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)sizeForUnitId;
- (id)initWithAdUnitID:(id)arg1;

@end

