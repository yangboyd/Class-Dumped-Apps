//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@interface RSBMFallback : NSObject <NSCopying>
{
    struct __MCFRuntimeBaseData _reserved;
    struct __MCFString *contentId;
    struct __MCFString *coverImageUrl;
    struct __MCFString *message;
    struct __RSVideo *video;
    struct __MCFString *attributionImageUrl;
    struct __MCFString *attribution;
}

+ (id)RSBMFallbackWithContentId:(id)arg1 coverImageUrl:(id)arg2 message:(id)arg3 video:(id)arg4 attributionImageUrl:(id)arg5 attribution:(id)arg6;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (unsigned long long)_cfTypeID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attribution;
- (id)attributionImageUrl;
- (id)video;
- (id)message;
- (id)coverImageUrl;
- (id)contentId;

@end

