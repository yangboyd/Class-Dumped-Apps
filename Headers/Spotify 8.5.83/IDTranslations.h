//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IDTranslations : NSObject
{
    NSDictionary *_translations;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *translations; // @synthesize translations=_translations;
- (id)languageCodeForVehicleLanguage:(long long)arg1;
- (_Bool)parseLine:(id)arg1 keyNumber:(id *)arg2 valueText:(id *)arg3;
- (id)dictionaryForDataOfFile:(id)arg1;
- (id)unzipAndParseTranslations:(id)arg1;
- (id)parseTranslations:(id)arg1;
- (id)languageCodeForFile:(id)arg1;
- (id)parseTranslation:(id)arg1;
- (id)unzipTranslations:(id)arg1;
- (void)mergeTranslation:(id)arg1 intoTranslations:(id)arg2;
- (id)parseTranslationsOfDataArray:(id)arg1;
- (id)translatedStringForLocale:(long long)arg1 identifier:(long long)arg2;
- (id)initWithArchiveArray:(id)arg1;

@end

