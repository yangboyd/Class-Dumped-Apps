//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"

@class NSString;

@interface JavaxXmlNamespaceQName : NSObject <JavaIoSerializable>
{
    NSString *namespaceURI_;
    NSString *localPart_;
    NSString *prefix_;
    NSString *qNameAsString_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)valueOfWithNSString:(id)arg1;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)getPrefix;
- (id)getLocalPart;
- (id)getNamespaceURI;
- (id)initWithNSString:(id)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

