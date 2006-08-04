require 'active_record'

class Designator < ActiveRecord::Base
  belongs_to :repository
  has_many :trees
  validates_presence_of :path

  def self.find_by_repository_and_path(repository, path)
    d = Designator.find(:first, :conditions => ['repository_id = ? and path = ?',
                                                repository, path])
    if not d then
      d = Designator.new(:repository => repository, :path => path)
      d.save
    end
    return d
  end

  def ==(o)
    repository == o.repository &&
      path == o.path
  end  

  def <=>(o)
    order = repository <=> o.repository
    if order == 0 then
      order = path <=> o.path
    end
    return order
  end

end
