//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSRegularExpression;

__attribute__((visibility("hidden")))
@interface GCKLLoggerFilter : NSObject
{
    NSMutableArray *_classNameRules;
    NSMutableArray *_functionNameRules;
    NSArray *_messagePatterns;
    NSRegularExpression *_messageRegex;
    NSMutableDictionary *_functionRegexByLevel;
    _Bool _needsCompilation;
    long long _minimumLevel;
}

@property(retain, nonatomic) NSArray *messagePatterns; // @synthesize messagePatterns=_messagePatterns;
@property(nonatomic) long long minimumLevel; // @synthesize minimumLevel=_minimumLevel;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)resetWithDictionary:(id)arg1;
- (void)reset;
- (_Bool)matchesFunction:(id)arg1 message:(id)arg2 logLevel:(long long)arg3;
- (_Bool)precompileExpressions;
- (void)addMessagePatterns:(id)arg1;
- (void)setLoggingLevel:(long long)arg1 forFunctions:(id)arg2;
- (void)setLoggingLevel:(long long)arg1 forClasses:(id)arg2;
@property(retain, nonatomic) NSArray *functionNameRules;
@property(retain, nonatomic) NSArray *classNameRules;
- (void)privateInit;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

