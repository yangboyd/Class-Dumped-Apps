//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface GIPAppParser : NSObject
{
    NSDictionary *_dictionary;
    NSArray *_tldList;
}

+ (id)appParserWithDictionary:(id)arg1 tldList:(id)arg2;
- (void).cxx_destruct;
- (id)parseAppIcons;
- (_Bool)parseGoogleOwnedApp;
- (_Bool)parseAuthUserEnabled;
- (id)parseAdditionalData;
- (id)parseMappingVersions;
- (id)parseSchemesMapping;
- (id)parseTags;
- (id)parseStoreId;
- (_Bool)parseSystemApp;
- (long long)parsePriority;
- (id)parseBundleIdentifier;
- (id)parseLocalizedNames;
- (id)parseName;
- (id)init;
- (id)initWithDictionary:(id)arg1 tldList:(id)arg2;

@end

