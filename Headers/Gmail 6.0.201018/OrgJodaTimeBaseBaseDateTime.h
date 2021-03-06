//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgJodaTimeBaseAbstractDateTime.h"

#import "JavaIoSerializable-Protocol.h"
#import "OrgJodaTimeReadableDateTime-Protocol.h"

@class NSString;

@interface OrgJodaTimeBaseBaseDateTime : OrgJodaTimeBaseAbstractDateTime <OrgJodaTimeReadableDateTime, JavaIoSerializable>
{
    // Error parsing type: Aq, name: iMillis_
    unsigned long long iChronology_;
}

- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (void)setChronologyWithOrgJodaTimeChronology:(id)arg1;
- (void)setMillisWithLong:(long long)arg1;
- (id)getChronology;
- (long long)getMillis;
- (long long)checkInstantWithLong:(long long)arg1 withOrgJodaTimeChronology:(id)arg2;
- (id)checkChronologyWithOrgJodaTimeChronology:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

