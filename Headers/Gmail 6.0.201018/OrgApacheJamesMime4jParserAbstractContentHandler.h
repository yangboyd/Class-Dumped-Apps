//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrgApacheJamesMime4jParserContentHandler-Protocol.h"

@class NSString;

@interface OrgApacheJamesMime4jParserAbstractContentHandler : NSObject <OrgApacheJamesMime4jParserContentHandler>
{
}

- (void)rawWithJavaIoInputStream:(id)arg1;
- (void)startMessage;
- (void)startHeader;
- (void)startBodyPart;
- (void)preambleWithJavaIoInputStream:(id)arg1;
- (void)fieldWithOrgApacheJamesMime4jStreamField:(id)arg1;
- (void)epilogueWithJavaIoInputStream:(id)arg1;
- (void)endMessage;
- (void)endHeader;
- (void)endBodyPart;
- (void)bodyWithOrgApacheJamesMime4jStreamBodyDescriptor:(id)arg1 withJavaIoInputStream:(id)arg2;
- (void)startMultipartWithOrgApacheJamesMime4jStreamBodyDescriptor:(id)arg1;
- (void)endMultipart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

