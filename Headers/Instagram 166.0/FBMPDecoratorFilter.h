//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBMPCompositeFilter.h>

@class NSArray;

@interface FBMPDecoratorFilter : FBMPCompositeFilter
{
    NSArray *_extraConsumerPorts;
    _Bool _required;
}

+ (id)newWithFilter:(id)arg1 extraConsumerPorts:(id)arg2 required:(_Bool)arg3;
- (void).cxx_destruct;
- (_Bool)allowsConnectionsWithConsumerPortMapping:(id)arg1;
- (id)consumerPorts;

@end

