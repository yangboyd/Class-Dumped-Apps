//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INIntent<CHRSiriIntentParameterContaining>, NSString;

@protocol CHRSiriIntentParameterContaining <NSObject>
- (NSString *)containedAccount;
- (id <CHRSiriSuggestionParameter>)containedParameter;
- (INIntent<CHRSiriIntentParameterContaining> *)intentContainingParameter:(id <CHRSiriSuggestionParameter>)arg1 associatedAccount:(NSString *)arg2;
@end

