//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SRLInstanceType-Protocol.h"

@class NSString, Protocol;

@interface SRLClassProtocolType : NSObject <NSCopying, SRLInstanceType>
{
    Protocol *_concreteProtocol;
    Class _concreteClass;
}

@property(readonly, nonatomic) Class concreteClass; // @synthesize concreteClass=_concreteClass;
@property(readonly, nonatomic) Protocol *concreteProtocol; // @synthesize concreteProtocol=_concreteProtocol;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)doesRepresentSupertypeOfClass:(Class)arg1;
- (id)initWithClass:(Class)arg1 constrainedToProtocol:(id)arg2;

// Remaining properties
@property(readonly) Class superclass;

@end

