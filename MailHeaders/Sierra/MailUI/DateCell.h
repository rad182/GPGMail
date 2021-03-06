//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSDateFormatter, NSFont;

@interface DateCell : NSTextFieldCell
{
    BOOL _forceTextColor;	// 84 = 0x54
    _Bool _lastStringWasRTL;	// 85 = 0x55
    long long _dateDetailLevel;	// 88 = 0x58
    double _lastWidth;	// 96 = 0x60
}

+ (void)_resetDateFormats:(id)arg1;	// IMP=0x000000010014384f
+ (void)initialize;	// IMP=0x00000001000151ac
@property(nonatomic) _Bool lastStringWasRTL; // @synthesize lastStringWasRTL=_lastStringWasRTL;
@property(nonatomic) double lastWidth; // @synthesize lastWidth=_lastWidth;
@property(nonatomic) long long dateDetailLevel; // @synthesize dateDetailLevel=_dateDetailLevel;
@property(nonatomic) BOOL forceTextColor; // @synthesize forceTextColor=_forceTextColor;
- (void)_updateDateColumnDetailLevels;	// IMP=0x0000000100146a94
- (void)_updateDateColumnDetailLevelWidths;	// IMP=0x00000001001468b8
- (BOOL)_readWidthsFromDefaults;	// IMP=0x00000001001463a2
- (void)_saveWidthsToDefaults;	// IMP=0x000000010014609f
- (id)_newWeekdayWidthReferenceDatesFirstWeekday:(unsigned long long *)arg1;	// IMP=0x0000000100145e32
- (id)_newMonthWidthReferenceDates;	// IMP=0x0000000100145be2
- (double)_widthOfLongestDateStringWithLevel:(long long)arg1 format:(id)arg2;	// IMP=0x0000000100145432
- (double)_widthOfStringWithTimeFormat:(id)arg1 withDatePrefix:(id)arg2;	// IMP=0x00000001001451a4
@property(retain, nonatomic) NSFont *lastFont;
- (void)setDrawingAttributes:(id)arg1;	// IMP=0x00000001001450fe
- (id)drawingAttributes;	// IMP=0x00000001001450ed
- (long long)accessibilityLineForIndex:(long long)arg1;	// IMP=0x00000001001450e2
- (id)accessibilityStringForRange:(struct _NSRange)arg1;	// IMP=0x000000010014507e
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;	// IMP=0x0000000100145038
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;	// IMP=0x0000000100144f92
- (long long)accessibilityNumberOfCharacters;	// IMP=0x0000000100144f24
- (struct _NSRange)accessibilityVisibleCharacterRange;	// IMP=0x0000000100144ece
- (id)accessibilityValue;	// IMP=0x0000000100144ea0
- (id)stringValue;	// IMP=0x0000000100144bf4
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x00000001001447dc
@property(readonly, nonatomic) double minimumWidth;
- (void)setObjectValue:(id)arg1;	// IMP=0x0000000100144743
- (void)setTimeIntervalSince1970:(double)arg1;	// IMP=0x00000001001446f0
@property(nonatomic) BOOL underlinesText;
- (void)setNeedsDisplay:(BOOL)arg1;	// IMP=0x00000001001445bf
- (void)setAlignment:(unsigned long long)arg1;	// IMP=0x00000001001444fa
- (void)setTextColor:(id)arg1;	// IMP=0x000000010014442e
- (void)setFont:(id)arg1;	// IMP=0x000000010001544f
@property(retain) NSDateFormatter *formatter;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100144074
- (void)_initDateFormatter;	// IMP=0x0000000100143e46
- (void)awakeFromNib;	// IMP=0x0000000100018bf1
- (void)_dateCellCommonInit;	// IMP=0x0000000100143cff
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001540a
- (id)initTextCell:(id)arg1;	// IMP=0x0000000100143c6f

@end

