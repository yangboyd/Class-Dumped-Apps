//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgApacheJamesMime4jFieldAbstractField.h"

#import "OrgApacheJamesMime4jDomFieldMimeVersionField-Protocol.h"

@class NSString, OrgApacheJamesMime4jFieldMimeversionParserParseException;

@interface OrgApacheJamesMime4jFieldMimeVersionFieldImpl : OrgApacheJamesMime4jFieldAbstractField <OrgApacheJamesMime4jDomFieldMimeVersionField>
{
    _Bool parsed_;
    int major_;
    int minor_;
    OrgApacheJamesMime4jFieldMimeversionParserParseException *parsedException_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getParseException;
- (int)getMajorVersion;
- (int)getMinorVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

