#import <Preferences/PSSpecifier.h>
#import <Preferences/PSTableCell.h>
#import <Preferences/PSViewController.h>

#import "CSColorPickerViewController.h"

@interface CSColorDisplayCell : PSTableCell

@property (nonatomic, retain) UIView *cellColorDisplay;
@property (nonatomic, retain) NSMutableDictionary *options;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)identifier specifier:(PSSpecifier *)specifier;
- (void)updateCellLabels;
- (void)updateCellDisplayColor;
- (void)refreshCellWithColor:(UIColor *)color;

- (void)openColorPickerView;

@end