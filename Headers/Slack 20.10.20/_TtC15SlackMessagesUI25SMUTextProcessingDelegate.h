//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, TSFParserContext;
@protocol TSFDataModelProvider, _TtP13SlackPlatform31TextPresentationValuesInterface_, _TtP13SlackPlatform33ConversationNameResolverInterface_;

@interface _TtC15SlackMessagesUI25SMUTextProcessingDelegate : NSObject
{
    // Error parsing type: , name: textDelegate
    // Error parsing type: , name: parserContext
    // Error parsing type: , name: dataModelProvider
    // Error parsing type: , name: conversationNameResolver
    // Error parsing type: , name: textPresentation
    // Error parsing type: , name: locale
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSLocale *locale;
@property(nonatomic, readonly) id <_TtP13SlackPlatform31TextPresentationValuesInterface_> textPresentation; // @synthesize textPresentation;
@property(nonatomic, readonly) id <_TtP13SlackPlatform33ConversationNameResolverInterface_> conversationNameResolver; // @synthesize conversationNameResolver;
@property(nonatomic, readonly) id <TSFDataModelProvider> dataModelProvider; // @synthesize dataModelProvider;
@property(nonatomic, readonly) TSFParserContext *parserContext; // @synthesize parserContext;

@end

