//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSAttributedString, UIBezierPath;
@protocol ASTextLinePositionModifier, OS_dispatch_semaphore;

@interface ASTextContainer : NSObject <NSCoding, NSCopying>
{
    _Bool _readonly;
    NSObject<OS_dispatch_semaphore> *_lock;
    struct CGSize _size;
    struct UIEdgeInsets _insets;
    UIBezierPath *_path;
    NSArray *_exclusionPaths;
    _Bool _pathFillEvenOdd;
    double _pathLineWidth;
    _Bool _verticalForm;
    unsigned long long _maximumNumberOfRows;
    unsigned long long _truncationType;
    NSAttributedString *_truncationToken;
    id <ASTextLinePositionModifier> _linePositionModifier;
}

+ (id)containerWithPath:(id)arg1;
+ (id)containerWithSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;
+ (id)containerWithSize:(struct CGSize)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(copy) id <ASTextLinePositionModifier> linePositionModifier;
@property(copy) NSAttributedString *truncationToken;
@property unsigned long long truncationType;
@property unsigned long long maximumNumberOfRows;
@property(getter=isVerticalForm) _Bool verticalForm;
@property double pathLineWidth;
@property(getter=isPathFillEvenOdd) _Bool pathFillEvenOdd;
@property(copy) NSArray *exclusionPaths;
@property(copy) UIBezierPath *path;
@property struct UIEdgeInsets insets;
@property struct CGSize size;
- (void)makeImmutable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyForced:(_Bool)arg1;
- (id)init;
- (id)description;

@end

