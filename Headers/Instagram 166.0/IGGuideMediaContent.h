//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGGuideProductImageContent, IGMedia;

@interface IGGuideMediaContent : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGMedia *_media;
    IGGuideProductImageContent *_productImage;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
+ (id)productImage:(id)arg1;
+ (id)media:(id)arg1;
- (void).cxx_destruct;
- (void)matchMedia:(CDUnknownBlockType)arg1 productImage:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanMedia:(CDUnknownBlockType)arg1 productImage:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

