//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEBundleImagePreloader-Protocol.h"

@class NSCache, NSString;

@interface AWELaunchImagePreloader : NSObject <AWEBundleImagePreloader>
{
    NSCache *_imageCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
- (id)awe_preloadedImageNamed:(id)arg1 inSearchBundleName:(id)arg2 compatibleWithTraitCollection:(id)arg3;
- (void)preloadImage;
- (void)handleMemoryWarning:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

