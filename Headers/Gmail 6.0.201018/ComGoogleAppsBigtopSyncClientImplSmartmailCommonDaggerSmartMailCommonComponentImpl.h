//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplSmartmailCommonSmartMailCommonComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplSmartmailCommonDaggerSmartMailCommonComponentImpl : NSObject <ComGoogleAppsBigtopSyncClientImplSmartmailCommonSmartMailCommonComponentImpl>
{
    id <JavaxInjectProvider> getDateTimeFormatterProvider_;
    id <JavaxInjectProvider> timeServiceProvider_;
    id <JavaxInjectProvider> smartMailTimeHelperImplProvider_;
    id <JavaxInjectProvider> smartMailTranslatorProvider_;
    id <JavaxInjectProvider> getTranslationEngineProvider_;
    id <JavaxInjectProvider> translatorProvider_;
    id <JavaxInjectProvider> smartMailTranslationHelperImplProvider_;
    id <JavaxInjectProvider> formattedTextParserImplProvider_;
    id <JavaxInjectProvider> tripsHelperClientAdapterProvider_;
}

- (void)dealloc;
- (id)getTripsHelperAdapter;
- (id)getFormattedTextParser;
- (id)getSmartMailTranslationHelper;
- (id)getSmartMailTimeHelper;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

