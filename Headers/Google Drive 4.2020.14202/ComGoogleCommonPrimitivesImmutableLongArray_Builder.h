//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSLongArray;

@interface ComGoogleCommonPrimitivesImmutableLongArray_Builder : NSObject
{
    IOSLongArray *array_;
    int count_;
}

- (void)dealloc;
- (id)build;
- (id)addAllWithComGoogleCommonPrimitivesImmutableLongArray:(id)arg1;
- (id)addAllWithJavaUtilStreamLongStream:(id)arg1;
- (id)addAllWithJavaUtilCollection:(id)arg1;
- (id)addAllWithJavaLangIterable:(id)arg1;
- (id)addAllWithLongArray:(id)arg1;
- (id)addWithLong:(long long)arg1;
- (id)initWithInt:(int)arg1;

@end

