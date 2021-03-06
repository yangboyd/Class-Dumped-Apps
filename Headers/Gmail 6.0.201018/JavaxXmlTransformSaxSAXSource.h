//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaxXmlTransformSource-Protocol.h"

@class NSString, OrgXmlSaxInputSource;
@protocol OrgXmlSaxXMLReader;

@interface JavaxXmlTransformSaxSAXSource : NSObject <JavaxXmlTransformSource>
{
    id <OrgXmlSaxXMLReader> reader_;
    OrgXmlSaxInputSource *inputSource_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)sourceToInputSourceWithJavaxXmlTransformSource:(id)arg1;
- (void)dealloc;
- (id)getSystemId;
- (void)setSystemIdWithNSString:(id)arg1;
- (id)getInputSource;
- (void)setInputSourceWithOrgXmlSaxInputSource:(id)arg1;
- (id)getXMLReader;
- (void)setXMLReaderWithOrgXmlSaxXMLReader:(id)arg1;
- (id)initWithOrgXmlSaxInputSource:(id)arg1;
- (id)initWithOrgXmlSaxXMLReader:(id)arg1 withOrgXmlSaxInputSource:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

