//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TDLTaskRecurrenceBo;

@interface TDLTaskRecurrenceModel : NSObject
{
    TDLTaskRecurrenceBo *taskRecurrenceBo_;
}

+ (long long)convert_weekDayFromDayOfWeek:(id)arg1;
+ (long long)convert_weekdaysFromDaysOfWeek:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isRolled;
- (id)getStatus;
- (id)getSchedule;
- (id)getTemplateDescription;
- (id)getTemplateTitle;
- (id)getTaskListId;
- (id)getRecurrenceId;
- (id)convert_scheduling;
- (id)convert_asRecurrence;

@end

