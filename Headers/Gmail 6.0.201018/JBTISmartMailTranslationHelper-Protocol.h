//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class IOSObjectArray, JCSSmartMailTextId, NSString;
@protocol JavaUtilList, JavaUtilSet;

@protocol JBTISmartMailTranslationHelper <JavaObject>
- (NSString *)getPluralTranslationWithDefaultFallbackWithJCSSmartMailTextId:(JCSSmartMailTextId *)arg1 withInt:(int)arg2 withNSStringArray:(IOSObjectArray *)arg3;
- (id <JavaUtilList>)getPluralTranslationWithPreferredFallbackWithJCSSmartMailTextId:(JCSSmartMailTextId *)arg1 withJavaUtilList:(id <JavaUtilList>)arg2 withInt:(int)arg3 withJavaUtilSet:(id <JavaUtilSet>)arg4 withNSStringArray:(IOSObjectArray *)arg5;
- (NSString *)getTranslationWithDefaultFallbackWithJCSSmartMailTextId:(JCSSmartMailTextId *)arg1 withNSStringArray:(IOSObjectArray *)arg2;
- (id <JavaUtilList>)getTranslationWithPreferredFallbackWithJCSSmartMailTextId:(JCSSmartMailTextId *)arg1 withJavaUtilList:(id <JavaUtilList>)arg2 withJavaUtilSet:(id <JavaUtilSet>)arg3 withNSStringArray:(IOSObjectArray *)arg4;
@end

