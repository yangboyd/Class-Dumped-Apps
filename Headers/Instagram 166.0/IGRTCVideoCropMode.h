//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGRTCVideoCropMode : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    unsigned long long _guestUseAspectRatio_width;
    unsigned long long _guestUseAspectRatio_height;
}

+ (id)useFBVPAspectRatioAndScale;
+ (id)useFBVPAspectRatio;
+ (id)passThrough;
+ (id)guestUseAspectRatioWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)matchPassThrough:(CDUnknownBlockType)arg1 useFBVPAspectRatio:(CDUnknownBlockType)arg2 useFBVPAspectRatioAndScale:(CDUnknownBlockType)arg3 guestUseAspectRatio:(CDUnknownBlockType)arg4;

@end

