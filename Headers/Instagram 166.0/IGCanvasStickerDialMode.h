//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>
#import <InstagramAppCoreFramework/NSCopying-Protocol.h>
#import <InstagramAppCoreFramework/NSSecureCoding-Protocol.h>

@class IGCanvasStickerDialModeSuggestions, IGCanvasStickerDialModeThumbnail, NSString;

@interface IGCanvasStickerDialMode : FBValueObject <NSSecureCoding, NSCopying, NSCoding>
{
    long long _type;
    NSString *_name;
    IGCanvasStickerDialModeThumbnail *_thumbnail;
    IGCanvasStickerDialModeSuggestions *_suggestions;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGCanvasStickerDialModeSuggestions *suggestions; // @synthesize suggestions=_suggestions;
@property(readonly, copy, nonatomic) IGCanvasStickerDialModeThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 name:(id)arg2 thumbnail:(id)arg3 suggestions:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)ephemeralContentIdentifier;

@end

