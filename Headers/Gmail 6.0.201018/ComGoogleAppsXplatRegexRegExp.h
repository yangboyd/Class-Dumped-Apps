//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaUtilRegexPattern, NSString;

@interface ComGoogleAppsXplatRegexRegExp : NSObject
{
    _Bool globalFlag_;
    int lastIndex_;
    JavaUtilRegexPattern *pattern_;
    NSString *source_;
}

+ (void)initialize;
- (void)dealloc;
- (id)matcherWithNSString:(id)arg1;
- (id)matchWithNSString:(id)arg1;
- (_Bool)testWithNSString:(id)arg1;
- (id)splitWithNSString:(id)arg1 withInt:(int)arg2;
- (id)splitWithNSString:(id)arg1;
- (void)setLastIndexWithInt:(int)arg1;
- (id)replaceWithNSString:(id)arg1 withComGoogleAppsXplatRegexRegExp_ReplacementCallback:(id)arg2;
- (id)replaceWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getSource;
- (_Bool)getMultiline;
- (int)getLastIndex;
- (_Bool)getIgnoreCase;
- (_Bool)getGlobal;
- (id)execWithNSString:(id)arg1;

@end

