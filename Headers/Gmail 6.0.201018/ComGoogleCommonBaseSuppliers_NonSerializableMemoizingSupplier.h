//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonBaseSupplier-Protocol.h"

@class NSString;

@interface ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier : NSObject <ComGoogleCommonBaseSupplier>
{
    unsigned long long delegate_;
    // Error parsing type: AB, name: initialized_
    id value_;
}

- (void)dealloc;
- (void)__javaClone:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

