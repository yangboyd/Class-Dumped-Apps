//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor;

@interface HMEHorizontalEdgesAnchor : NSObject
{
    // Error parsing type: , name: leadingAnchor
    // Error parsing type: , name: trailingAnchor
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSLayoutDimension *widthAnchor;
- (id)constraintsContainingAnchor:(id)arg1 inset:(double)arg2;
- (id)constraintsContainedInAnchor:(id)arg1 inset:(double)arg2;
- (id)constraintsEqualToAnchor:(id)arg1 inset:(double)arg2;
- (id)constraintsContainingAnchor:(id)arg1;
- (id)constraintsContainedInAnchor:(id)arg1;
- (id)constraintsEqualToAnchor:(id)arg1;
@property(nonatomic, readonly) NSLayoutXAxisAnchor *trailingAnchor; // @synthesize trailingAnchor;
@property(nonatomic, readonly) NSLayoutXAxisAnchor *leadingAnchor; // @synthesize leadingAnchor;

@end

