//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMapSearchGenericCellViewModel.h"

#import "NSCopying-Protocol.h"

@class SCActionModel, SCMapPerson, SCMapPersonLocation, SCUserSession;

@interface SCMapSearchGenericPersonCellViewModel : SCMapSearchGenericCellViewModel <NSCopying>
{
    SCMapPerson *_person;
    SCMapPersonLocation *_personLocation;
    SCUserSession *_userSession;
    SCActionModel *_tapAction;
    SCActionModel *_longPressAction;
}

+ (id)_subtitleForPersonLocation:(id)arg1;
@property(copy, nonatomic) SCActionModel *longPressAction; // @synthesize longPressAction=_longPressAction;
@property(copy, nonatomic) SCActionModel *tapAction; // @synthesize tapAction=_tapAction;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) SCMapPersonLocation *personLocation; // @synthesize personLocation=_personLocation;
@property(readonly, nonatomic) SCMapPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (id)subtitle;
- (id)title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersonLocation:(id)arg1 mapPeopleFriendsProvider:(id)arg2 userSession:(id)arg3;
- (id)initWithPerson:(id)arg1 userSession:(id)arg2;

@end

