//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TWTRJSONConvertible-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface TWTREntityCollection : NSObject <NSCoding, NSCopying, TWTRJSONConvertible>
{
    NSArray *_hashtags;
    NSArray *_cashtags;
    NSArray *_media;
    NSArray *_urls;
    NSArray *_userMentions;
    NSDictionary *_validatedDictionary;
}

+ (id)validateJSONDictionary:(id)arg1;
+ (id)JSONValidator;
@property(copy, nonatomic) NSDictionary *validatedDictionary; // @synthesize validatedDictionary=_validatedDictionary;
@property(readonly, copy, nonatomic) NSArray *userMentions; // @synthesize userMentions=_userMentions;
@property(readonly, copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(readonly, copy, nonatomic) NSArray *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSArray *cashtags; // @synthesize cashtags=_cashtags;
@property(readonly, copy, nonatomic) NSArray *hashtags; // @synthesize hashtags=_hashtags;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setPropertiesFromValidatedDictionary:(id)arg1;
- (id)initWithValidatedDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

