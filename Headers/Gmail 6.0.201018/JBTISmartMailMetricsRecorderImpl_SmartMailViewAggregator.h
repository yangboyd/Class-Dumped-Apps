//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JavaUtilSet, JavaUtilSortedMap;

@interface JBTISmartMailMetricsRecorderImpl_SmartMailViewAggregator : NSObject
{
    id <JavaUtilSortedMap> viewCounts_;
    id <JavaUtilSet> sessionCardInstanceIds_;
    id <JavaUtilSet> typedProtoViewTypes_;
}

- (void)dealloc;
- (_Bool)isEmpty;
- (id)flushTypedProtoViews;
- (id)flushCountersToProto;
- (void)addSmartMailViewWithJBTSmartMailComponent_ViewMode:(id)arg1 withNSString:(id)arg2 withJCSAssignedId:(id)arg3 withNSString:(id)arg4 withBoolean:(_Bool)arg5;

@end

