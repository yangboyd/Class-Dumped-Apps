//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSObjectArray;

@interface SunNetWwwMessageHeader : NSObject
{
    IOSObjectArray *keys_;
    IOSObjectArray *values_;
    int nkeys_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)canonicalIDWithNSString:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)mergeHeaderWithJavaIoInputStream:(id)arg1;
- (void)parseHeaderWithJavaIoInputStream:(id)arg1;
- (void)setIfNotSetWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)setWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)removeWithNSString:(id)arg1;
- (void)grow;
- (void)setWithInt:(int)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (void)prependWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)addWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)printWithJavaIoPrintStream:(id)arg1;
- (id)filterAndAddHeadersWithNSStringArray:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)getHeadersWithNSStringArray:(id)arg1;
- (id)getHeaders;
- (id)multiValueIteratorWithNSString:(id)arg1;
- (_Bool)filterNTLMResponsesWithNSString:(id)arg1;
- (id)findNextValueWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getValueWithInt:(int)arg1;
- (id)getKeyWithInt:(int)arg1;
- (int)getKeyWithNSString:(id)arg1;
- (id)findValueWithNSString:(id)arg1;
- (void)reset;
- (id)getHeaderNamesInList;
- (id)initWithJavaIoInputStream:(id)arg1;
- (id)init;

@end

