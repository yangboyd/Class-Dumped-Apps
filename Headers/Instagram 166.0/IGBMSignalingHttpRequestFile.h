//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@interface IGBMSignalingHttpRequestFile : NSObject <NSCopying>
{
    struct __MCFRuntimeBaseData _reserved;
    struct __MCFData *data;
    struct __MCFString *contentType;
}

+ (id)IGBMSignalingHttpRequestFileWithData:(id)arg1 contentType:(id)arg2;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (unsigned long long)_cfTypeID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)contentType;
- (id)data;

@end

