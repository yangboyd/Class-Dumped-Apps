//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgJodaTimeDateTimeZone.h"

@interface XPTIosDateTimeZoneProvider_IosDateTimeZone : OrgJodaTimeDateTimeZone
{
    unsigned long long cachedInterval_;
    id nativeTimeZone_;
}

- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)findTransitionIntervalWithLong:(long long)arg1;
- (long long)previousTransitionWithLong:(long long)arg1;
- (long long)nextTransitionWithLong:(long long)arg1;
- (_Bool)isFixed;
- (int)getStandardOffsetWithLong:(long long)arg1;
- (int)getOffsetWithLong:(long long)arg1;
- (id)getNameKeyWithLong:(long long)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

