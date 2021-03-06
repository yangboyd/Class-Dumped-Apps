//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKDataSourceSectionStyle, GDKFileQuery, GDKSectionHeaderCVO;
@protocol GDKFileCVOConfiguring;

@interface GDKFileSection : NSObject
{
    GDKFileQuery *_constraint_10;
    GDKSectionHeaderCVO *_header_6;
    GDKDataSourceSectionStyle *_style_5;
    id <GDKFileCVOConfiguring> _cvoConfiguration_16;
}

@property(readonly, nonatomic) id <GDKFileCVOConfiguring> cvoConfiguration; // @synthesize cvoConfiguration=_cvoConfiguration_16;
@property(readonly, nonatomic) GDKDataSourceSectionStyle *style; // @synthesize style=_style_5;
@property(readonly, nonatomic) GDKSectionHeaderCVO *header; // @synthesize header=_header_6;
@property(readonly, nonatomic) GDKFileQuery *constraint; // @synthesize constraint=_constraint_10;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithConstraint:(id)arg1 header:(id)arg2 style:(id)arg3 cvoConfiguration:(id)arg4;

@end

